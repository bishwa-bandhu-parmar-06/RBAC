// Middleware to check for admin role
exports.isAdmin = (req, res, next) => {
    if (req.user.role !== 'admin') {
        return res.status(403).send('Access Denied: Admins Only.');
    }
    next();
};

// Middleware to check for user role
exports.isUser = (req, res, next) => {
    if (req.user.role !== 'user') {
        return res.status(403).send('Access Denied: Users Only.');
    }
    next();
};
