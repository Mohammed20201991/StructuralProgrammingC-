### A bank system may store total money in one shared variable.
Output
`Bank Balance = 10500`
Why External Linkage Here?

Because:

- Many files need the same shared data
- One file changes the value
- Other files read the value

This is the main purpose of external linkage.
