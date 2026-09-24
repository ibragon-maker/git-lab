## Card 1
Commit had a bad message → git commit --amend → replaces the last commit message instead of adding a new one
## Card 2
Accidentally staged an unwanted file → git restore --staged notes.txt → removes the file from the staging area without deleting local changes
## Card 3
Committed sensitive data by mistake → git reset [--soft | default | --hard] HEAD~1 → --soft keeps changes staged, default keeps changes unstaged, --hard destroys changes entirely
## Card 4
Pushed a broken commit that breaks the build → git revert HEAD → creates a new commit that safely reverses the broken changes without rewriting shared history
## Card 5
Accidentally wiped commits with hard reset → git reflog + git reset --hard HEAD@{n} → reflog tracks every HEAD movement, letting you travel back in time to recover lost commits
## Card 6
Made a commit while in a Detached HEAD state → git switch -c keep <hash> → rescues an orphaned commit by locking a new branch onto its hash before it gets garbage collected
## Card 7
Blocked pull due to uncommitted local changes → git stash + git pull + git stash pop → stashing temporarily saves local work so you can pull safely without losing progress1
## Card 8
Accidentally committed straight to main → git switch -c branch + git switch main + git reset --hard origin/main → branches save the commit first, then hard reset cleans main back to its pristine remote state
