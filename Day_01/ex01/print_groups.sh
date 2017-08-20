#!/bash/sh
groups FT_user | sed 's/ /,/g' | tr -d '\b' 
