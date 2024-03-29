0. Set up development with Python
Let’s serve what you built for AirBnB clone v2 - Web framework on web-01. This task is an exercise in setting up your development environment, which is used for testing and debugging your code before deploying it to production.

Requirements:

Make sure that task #3 of your SSH project is completed for web-01. The checker will connect to your servers.
Install the net-tools package on your server: sudo apt install -y net-tools
Git clone your AirBnB_clone_v2 on your web-01 server.
Configure the file web_flask/0-hello_route.py to serve its content from the route /airbnb-onepage/ on port 5000.
Your Flask application object must be named app (This will allow us to run and check your code).
1. Set up production with Gunicorn
Now that you have your development environment set up, let’s get your production application server set up with Gunicorn on web-01, port 5000. You’ll need to install Gunicorn and any libraries required by your application. Your Flask application object will serve as a WSGI entry point into your application. This will be your production environment. As you can see we want the production and development of your application to use the same port, so the conditions for serving your dynamic content are the same in both environments.

Requirements:

Install Gunicorn and any other libraries required by your application.
The Flask application object should be called app. (This will allow us to run and check your code)
You will serve the same content from the same route as in the previous task. You can verify that it’s working by binding a Gunicorn instance to localhost listening on port 5000 with your application object as the entry point.
In order to check your code, the checker will bind a Gunicorn instance to port 6000, so make sure nothing is listening on that port.
.
.
.
5. Serve your AirBnB clone
Let’s serve what you built for AirBnB clone - Web dynamic on web-01.

Requirements:

Git clone your AirBnB_clone_v4
Your Gunicorn instance should serve content from web_dynamic/2-hbnb.py on port 5003
Setup Nginx so that the route / points to your Gunicorn instance
Setup Nginx so that it properly serves the static assets found in web_dynamic/static/ (this is essential for your page to render properly)
For your website to be fully functional, you will need to reconfigure web_dynamic/static/scripts/2-hbnb.js to the correct IP
Nginx must serve this page both locally and on its public IP and port 5003
Make sure to pull up your Developer Tools on your favorite browser to verify that you have no errors
Upload your Nginx config as 5-app_server-nginx_config
