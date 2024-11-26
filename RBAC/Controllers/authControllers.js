const User = require('../Models/users');
const bcrypt = require('bcrypt');
const jwt = require('jsonwebtoken');

// Handle signup
exports.signup = async (req, res) => {
    const { username, email, password, role } = req.body;
    try {
        const existingUser = await User.findOne({ email });
        if (existingUser) {
            return res.render('signin', { message: 'User already exists. Please sign in.' });
        }

        const hashedPassword = await bcrypt.hash(password, 10);
        const newUser = new User({ username, email, password: hashedPassword, role });
        await newUser.save();

        res.redirect('/signin'); // Redirect to sign-in page after signup
    } catch (err) {
        console.error('Signup error:', err);
        res.status(500).send('An error occurred during signup.');
    }
};

// Handle signin
exports.signin = async (req, res) => {
    const { email, password } = req.body;
    try {
        const user = await User.findOne({ email });
        if (!user) {
            return res.render('signin', { message: 'User does not exist. Please sign up.' });
        }

        const isPasswordValid = await bcrypt.compare(password, user.password);
        if (!isPasswordValid) {
            return res.render('signin', { message: 'Invalid credentials. Please try again.' });
        }

        const token = jwt.sign({ userId: user._id, role: user.role }, 'your_jwt_secret_key', { expiresIn: '1h' });
        res.cookie('token', token, { httpOnly: true });

        if (user.role === 'admin') {
            return res.redirect(`/admindashboard`);
        } else {
            return res.redirect(`/userDashboard`);
        }
    } catch (err) {
        console.error('Signin error:', err);
        res.status(500).send('An error occurred during signin.');
    }
};

// Handle logout
exports.logout = (req, res) => {
    res.clearCookie('token');
    res.redirect('/signin');
};
