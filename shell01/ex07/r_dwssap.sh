cat /etc/passwd | grep -v '#' | awk 'NR%2==0' | cut -f1 -d ":" | rev | sort -r  | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | tr '\n' ',' | sed 's/,/,/g' | sed 's/..$/\./' | tr -d '\n'
