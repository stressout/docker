FROM ruby

RUN apt-get update -y && apt-get upgrade -y
# Update and upgrade packeges
RUN apt-get install -y sqlite3 nodejs
# Install packages for proj

#RUN mkdir -p /opt/app
# Create directory for our app's folder

ONBUILD COPY app /opt/app
# Copy folder app in opt's directory

ONBUILD WORKDIR /opt/app
# To set up work space in /opt/app

ONBUILD EXPOSE 3000

ONBUILD RUN bundle install
# To set up dependecies in child image
ONBUILD RUN rake db:migrate
# Migrate our db in child image
ONBUILD RUN rake db:seed
# Populate the db in child image
