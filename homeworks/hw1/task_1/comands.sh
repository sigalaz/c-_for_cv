# 1. Count how many lines are there in 'data.dat'
wc -l data.dat

# 2. Count how many lines of those contain "dolor" or "dalor"
grep -n "d[ao]lor" data.dat | wc -l

# 3. Count how many words are there in "data.dat"
wc -w data.dat

# 4. Count how many of those start with "mol"
grep -n -o '\bmol' data.dat | wc -l



