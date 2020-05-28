 ntpq -pn | cut -b 1-64 --complement | cut -b 1-6 | awk 'NR > 2 { print }' > res.txt

