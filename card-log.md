# Card Log (Member 3)

## Card 1
Commit had a bad message -> git commit --amend -> replaces the last commit with the corrected message

## Card 2
Wrong file was staged -> git restore --staged accidental.txt -> removes it from staging without changing the file

## Card 3
Secret was committed locally -> git rm --cached and git commit --amend -> removes the secret from the commit before it is pushed

## Card 4
Bad commit was already pushed -> git revert HEAD -> safely creates a new commit that undoes the pushed change without rewriting shared history

## Card 5
Commit disappeared after reset -> git reflog and git reset --hard HEAD@{1} -> reflog finds the previous HEAD and restores the lost commit

## Card 6
HEAD became detached after checking out a commit -> git switch cards-3 -> returns HEAD to my branch without losing the branch history

## Card 7
Local changes blocked a pull -> git stash, git pull, git stash pop -> temporarily stores local work so the branch can be updated safely

## Card 8
Commit was accidentally made on main -> git cherry-pick main and git reset --hard origin/main -> moves the commit to my card branch and restores main to the remote state
