const router = require('express').Router();
const authController = require('../controllers/authController');
const adminController = require('../controllers/adminController');
const userController = require('../controllers/userController');
const { authenticateToken } = require('../middlewares/authMiddleware');
const { isAdmin, isUser } = require('../middlewares/roleMiddleware');

// Auth Routes
router.get('/signup', (req, res) => res.render('signup'));
router.post('/signup', authController.signup);
router.get('/signin', (req, res) => res.render('signin'));
router.post('/signin', authController.signin);
router.post('/logout', authController.logout);

// Admin Routes
router.get('/admindashboard', authenticateToken, isAdmin, adminController.adminDashboard);

// User Routes
router.get('/userDashboard', authenticateToken, isUser, userController.userDashboard);

module.exports = router;






















// const router = require('express').Router();
// const User = require('../Models/users');
// const bcrypt = require('bcrypt');
// const jwt = require('jsonwebtoken');

// require('dotenv').config();
// const jwtSecretKey = process.env.JWT_SECRET_KEY;

// router.get('/admindashboard', async (req, res) => {
//     const userId = req.query.user;

//     try {
//         // Fetch the admin data
//         const admin = await User.findById(userId);
//         if (!admin || admin.role !== 'admin') {
//             return res.status(403).send('Access Denied');
//         }

//         // Fetch all admins (can be customized as needed)
//         const allAdmins = await User.find({ role: 'admin' });

//         // Pass admin data and allAdmins list to the dashboard
//         res.render('admindashboard', { admin, allAdmins });
//     } catch (error) {
//         console.error('Error fetching admin data:', error);
//         res.status(500).send('Server Error');
//     }
// });


// router.get('/userDashboard', async (req, res) => {
//     const userId = req.query.user;

//     try {
//         const user = await User.findById(userId);
//         if (!user || user.role !== 'user') {
//             return res.status(403).send('Access Denied');
//         }

//         // Fetch all users (you can add conditions if necessary, e.g., only 'user' role)
//         const allUsers = await User.find({ role: 'user' });

//         // Pass user and allUsers data to the dashboard
//         res.render('userDashboard', { user, allUsers });
//     } catch (error) {
//         console.error('Error fetching user data:', error);
//         res.status(500).send('Server Error');
//     }
// });

// router.get('/signup', async (req, res) => {
//     res.render('signup.ejs');
// });
// // Route for Signup
// router.post('/signup', async (req, res) => {
//     const { username, email, password, role } = req.body;

//     try {
//         // Check if the user already exists
//         const existingUser = await User.findOne({ email });
//         if (existingUser) {
//             return res.render('signin', { message: 'User already exists. Please sign in.' });
//         }

//         // Hash the password before saving it to the database
//         const hashedPassword = await bcrypt.hash(password, 10);  // 10 is the saltRounds

//         // Create a new user with the hashed password
//         const newUser = new User({ username, email, password: hashedPassword, role });
//         await newUser.save();

//         // Generate a JWT token (you can skip this if you want the token generated at login)
//         const token = jwt.sign(
//             { userId: newUser._id, role: newUser.role },
//             'jwtSecretKey',  // Use a secret key to sign the token
//             { expiresIn: '1h' }
//         );

//         // Redirect to the appropriate dashboard based on the role
//         if (role === 'admin') {
//             return res.redirect(`/admindashboard?user=${newUser._id}`);
//         } else {
//             return res.redirect(`/userDashboard?user=${newUser._id}`);
//         }

//     } catch (err) {
//         console.error('Error during signup:', err);
//         res.status(500).send('An error occurred during signup.');
//     }
// });



// router.get('/signin', async (req, res) => {
//     res.render('signin.ejs');
// });



// router.post('/signin', async (req, res) => {
//     const { email, password } = req.body;

//     try {
//         // Check if the user exists
//         const user = await User.findOne({ email });
//         if (!user) {
//             return res.render('signin', { message: 'User does not exist. Please sign up.' });
//         }

//         // Check if the password matches
//         const isPasswordValid = await bcrypt.compare(password, user.password);
//         if (!isPasswordValid) {
//             return res.render('signin', { message: 'Wrong credentials. Please try again.' });
//         }

//         // Create a JWT token
//         const token = jwt.sign(
//             { userId: user._id, role: user.role },
//             'jwtSecretKey',  // Use a secret key to sign the token
//             { expiresIn: '1h' }
//         );


//         // Set the token in the cookies (optional)
//         res.cookie('token', token, { httpOnly: true });

//         // Redirect to the correct dashboard based on role
//         if (user.role === 'admin') {
//             return res.redirect(`/admindashboard?user=${user._id}`);
//         } else {
//             return res.redirect(`/userDashboard?user=${user._id}`);
//         }
//     } catch (err) {
//         console.error('Error during signin:', err);
//         res.status(500).send('An error occurred during signin.');
//     }
// });



// // Logout Route
// router.post('/logout', (req, res) => {
//     res.clearCookie('token'); // Clear the JWT token
//     res.redirect('/signin'); // Redirect to the signin page
// });



// module.exports = router;















