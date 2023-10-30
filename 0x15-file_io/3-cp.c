#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    int fd_from = open(argv[1], O_RDONLY);
    if (fd_from < 0) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    int fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0666);
    if (fd_to < 0) {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }

    char buf[1024];
    ssize_t nread;
    while ((nread = read(fd_from, buf, sizeof buf)) > 0) {
        if (write(fd_to, buf, nread) != nread) {
            dprintf(STDERR_FILENO, "Error: Can't write to fd %d\n", fd_to);
            exit(100);
        }
    }

    if (nread < 0) {
        dprintf(STDERR_FILENO, "Error: Can't read from fd %d\n", fd_from);
        exit(100);
    }

    if (close(fd_from) < 0) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }

    if (close(fd_to) < 0) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }

    return 0;
}
