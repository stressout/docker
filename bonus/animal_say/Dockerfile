FROM debian:latest

RUN apt-get update -y && apt-get upgrade -y

RUN apt-get install lolcat -y

RUN cp /usr/games/lolcat /bin

CMD ["lolcat"]
