#!/bin/bash
name=$(date);
echo $name;
git add .
git commit -S -sm "Demo commit @ $name bluffed"
git push origin main
echo "Success ";