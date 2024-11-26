const mongoose = require('mongoose');
 // Ensure this file exports `dbURI`
const dbURI = "mongodb://127.0.0.1:27017/RBACDB";

// Connect to MongoDB
mongoose.connect(dbURI, { useNewUrlParser: true, useUnifiedTopology: true });

// Event Listeners
mongoose.connection.on('connected', () => {
    console.log(`Mongoose connected to ${dbURI}`);
});

mongoose.connection.on('error', (err) => {
    console.error(`Mongoose connection error: ${err}`);
});

mongoose.connection.on('disconnected', () => {
    console.log('Mongoose disconnected');
});

// Export the Mongoose instance
module.exports = mongoose;