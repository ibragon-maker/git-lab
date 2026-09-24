## Card Log (Member 1)
Commit had a bad message -> git commit --amend -> replaces the last commit instead of adding a new one

## Card 2
Accidentally staged a file -> git restore --staged -> removes the file from the staging area without deleting local work

## Card 3
Committed sensitive data -> git reset --soft/mixed/hard -> soft keeps staged, default (mixed) keeps unstaged, hard discards all changes

## Card 4
Bad commit already pushed -> git revert HEAD -> creates a new commit that safely undoes the changes without force-pushing shared history

## Card 5
Accidentally lost commits via hard reset -> git reflog & git reset --hard HEAD@{1} -> restores HEAD to a lost commit using Git's reference log
