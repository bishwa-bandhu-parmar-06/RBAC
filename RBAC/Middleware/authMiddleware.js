const jwt = require('jsonwebtoken');

// Middleware to authenticate the token
exports.authenticateToken = (req, res, next) => {
    const token = req.cookies.token; // Assumes token is stored in cookies
    if (!token) {
        return res.status(401).render('signin', { message: 'Please log in first.' });
    }

    try {
        const decoded = jwt.verify(token, 'your_jwt_secret_key');
        req.user = decoded; // Attach user data to the request object
        next();
    } catch (err) {
        console.error('Invalid token:', err);
        return res.status(403).render('signin', { message: 'Invalid token. Please log in again.' });
    }
};
