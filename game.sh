trap break INT
touch record.txt
while true ; do
    (time ./a.out) 2>> record.txt 
done
echo YOUR SCORES
cat record.txt | grep real
rm record.txt
