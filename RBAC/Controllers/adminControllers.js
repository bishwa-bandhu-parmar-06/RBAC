const User = require('../Models/users');

exports.adminDashboard = async (req, res) => {
    try {
        const allAdmins = await User.find({ role: 'admin' });
        res.render('adminDashboard', { admin: req.user, allAdmins });
    } catch (err) {
        console.error('Error fetching admins:', err);
        res.status(500).send('Server Error');
    }
};
