#sensors | grep "Core" 

for x in $(cat /home/reshu/res.txt)
do
    
    set -f
    parts=($x)
    set +f
    
    echo "${parts[0]}"
done

