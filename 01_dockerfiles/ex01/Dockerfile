FROM debian

ENV TS3SERVER_LICENSE=accept
# set enviroment for our ts server defined in ts for docker(Documentation)
RUN apt-get update -y && apt-get upgrade -y
#update packeges
RUN apt-get install wget bzip2 -y
#install tools for download ts folder, then unpackage it and then delete
#downloaded folder
RUN wget http://dl.4players.de/ts/releases/3.8.0/teamspeak3-server_linux_amd64-3.8.0.tar.bz2
RUN tar -xvjf teamspeak3-server_linux_amd64-3.8.0.tar.bz2
RUN rm -f teamspeak3-server_linux_amd64-3.8.0.tar.bz2

#- j : пропустить архив через bzip2 [ 1 ]
#- x : извлечь файлы из архива
#- v : выводить список обрабатываемых файлов в процессе работы команды
#- f : распаковывать файл, имя которого указано после команды и модификаторов. То есть, параметр f предписывает использовать следующий аргумент как то, с чем надо работать вместо устройства архивации, указанного в системе по умолчанию, например /dev/rmt0.

EXPOSE 9987/udp
EXPOSE 10011
EXPOSE 30033
# open ports for using ts server
#list of ports in file stack.yml in ts for docker(Documentation)
# ports:
#      - 9987:9987/udp
#      - 10011:10011
#      - 30033:30033

WORKDIR teamspeak3-server_linux_amd64

CMD ["sh", "ts3server_minimal_runscript.sh"]
# when container is running, our container is run script for ts server
