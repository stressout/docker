FROM debian:latest

RUN apt-get update -y && apt-get upgrade -y

RUN apt-get install vim gcc valgrind -y

RUN mkdir -p leak_check

COPY ./leak.c /leak_check

WORKDIR /leak_check

RUN cat leak.c

RUN ["gcc", "-Wall", "-Wextra", "-Werror", "-g", "-o", "leak", "leak.c"]

CMD ["valgrind", "./leak"]
