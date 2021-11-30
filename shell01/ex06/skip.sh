
i=0
while true
do
read var1
let "i++"
if [ $i = 2 ];
then
ls -ls
i=0
fi
done