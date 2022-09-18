#!/bin/bash
name=$(date);
echo $name;
git add .
git commit -S -sm "$name"