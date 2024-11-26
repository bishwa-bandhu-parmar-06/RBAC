const User = require('../Models/users');

exports.userDashboard = async (req, res) => {
    try {
        const allUsers = await User.find({ role: 'user' });
        res.render('userDashboard', { user: req.user, allUsers });
    } catch (err) {
        console.error('Error fetching users:', err);
        res.status(500).send('Server Error');
    }
};
