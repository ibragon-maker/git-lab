## Card 1
Commit had a bad message -> git commit --amend -> replaces the last commit instead of adding a new one

## Card 2
Accidentally staged the wrong file -> git restore --staged notes.txt -> unstages the file without wiping out local work

## Card 3
Committed sensitive data -> git reset --soft/mixed/hard -> soft keeps staged, mixed keeps unstaged, hard deletes it

## Card 4
Pushed broken code to GitHub -> git revert HEAD -> creates a safe new commit that undoes changes without force pushing

## Card 5
Lost commits after a hard reset -> git reflog & git reset --hard HEAD@{1} -> finds lost commit in reflog and moves HEAD back to it

## Card 6
Made a commit in detached HEAD -> git switch -c keep <hash> -> rescues the unattached commit onto a new branch named keep

## Card 7
Pull blocked by uncommitted edits -> git stash && git pull && git stash pop -> temporarily hides local work so pull can finish safely

## Card 8
Committed to main by mistake -> git branch feature/oops && git reset --hard origin/main -> shifts the commit to a feature branch and cleans main
