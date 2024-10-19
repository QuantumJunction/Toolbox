#!/bin/bash

echo 'make dir'
mkdir -p /var/opt/mosquitto/config
mkdir -p /var/opt/mosquitto/data
mkdir -p /var/opt/mosquitto/log

echo 'create file'
> /var/opt/mosquitto/config/mosquitto.conf

echo 'run docker command'
docker run -v /var/opt/mosquitto/config:/mosquitto/config \
           -v /var/opt/mosquitto/data:/mosquitto/data \
           -v /var/opt/mosquitto/log:/mosquitto/log \
           -p 1883:1883 \
           -p 9001:9001\
           -it\
           --restart=always\
           eclipse-mosquitto
