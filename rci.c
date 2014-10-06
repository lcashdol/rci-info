/*Larry W. Cashdollar
Just some code to run when testing RCI. It writes
parent process PID, Name and stats from /proc/PID/status to a /tmp file.
8/4/2013
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXBUF 128
#define LILBUF 32

int
main (void)
{

  FILE *fout;
  char tmp[LILBUF], buffer[MAXBUF], status[MAXBUF], buf[MAXBUF];
  int fin = -1, bytes = 0;
  pid_t ppid = 0, pid = 0;

  strcpy (tmp, "/tmp/RCE_XXXXXX");

  fin = mkstemp (tmp);

  pid = getpid ();
  ppid = getppid ();
  sprintf (status, "/proc/%d/status", (int) ppid);
  fout = fopen (status, "ro");

  bytes =
    sprintf (buffer,
	     "ARGGHHH I've been executed! my pid is :%d Parent id %d %s\n",
	     pid, ppid, buf);


  bytes = write (fin, buffer, strlen (buffer));

  if (bytes <= 0) {
    printf ("ERROR something went wrong with write(): %d\n", bytes);
    exit(EXIT_FAILURE);
    }

  while (fgets (buf, 127, fout) != NULL)
    {
      bytes += write (fin, buf, strlen (buf));
    }

  if (bytes > 0)
    printf ("Bytes written to file: %d\n", bytes);
  else
    printf ("ERROR something went wrong with write(): %d\n", bytes);

  close (fin);
  close (fout);
  return (0);

}
