const express = require('express');
const app = express();
const PORT = process.env.PORT || 3000;
const Path = require('path');
const mongoose = require('./Config/db');
const router = require('./Routes/index');

// Middleware for parsing form data (application/x-www-form-urlencoded)
app.use(express.urlencoded({ extended: true }));

// Middleware for parsing JSON data (application/json)
app.use(express.json());

// Set view engine and static files path
app.set('views', Path.join(__dirname, 'Public/views'));
app.set('view engine', 'ejs');
app.use(express.static(Path.join(__dirname, 'Public')));

// Define a route handler for the default home page
app.get('/', function (req, res) {
  res.render('Home.ejs');
});

// Add routes after middleware
app.use('/', router);

app.listen(PORT, () => {
  console.log(`Server is running on port ${PORT}`);
});
