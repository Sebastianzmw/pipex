# pipex

Recreates the shell pipe `< infile cmd1 | cmd2 > outfile` in C, written at 42 Kuala Lumpur (2024).

```sh
./pipex infile "grep hello" "wc -l" outfile
# same as: < infile grep hello | wc -l > outfile
```

## How it works
- Creates a pipe with `pipe()` and forks one child process per command
- Redirects stdin and stdout with `dup2()`, so each command reads from or writes to the pipe and the files
- Finds each command's binary by searching `PATH` in the environment, then runs it with `execve()`
- Waits on the children with `waitpid()` and handles missing files, bad commands and failed system calls

## Build
```sh
make
```
