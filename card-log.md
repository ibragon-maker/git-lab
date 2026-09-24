## Card 1
Commit had a bad message → git commit --amend → replaces the last commit message instead of adding a new one
## Card 2
Accidentally staged an unwanted file → git restore --staged notes.txt → removes the file from the staging area without deleting local changes
## Card 3
Committed sensitive data by mistake → git reset [--soft | default | --hard] HEAD~1 → --soft keeps changes staged, default keeps changes unstaged, --hard destroys changes entirely
