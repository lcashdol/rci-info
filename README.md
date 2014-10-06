rci-info
========

RCI Info, just a simple binary you can run when testing RCI vulnerabilities in software.  A little more interesting than id; uname -a etc.

compile it: gcc rci.c -o rci

 $ ./rci
Bytes written to file: 810

$ cat /tmp/RCE_4gQiFi 
ARGGHHH I've been executed! my pid is :22037 Parent id 21573
Name:	bash
State:	S (sleeping)
Tgid:	21573
Pid:	21573
PPid:	21568
TracerPid:	0
Uid:	1001	1001	1001	1001
Gid:	1002	1002	1002	1002
FDSize:	256
Groups:	1002 
VmPeak:	    6248 kB
VmSize:	    6184 kB
VmLck:	       0 kB
VmPin:	       0 kB
VmHWM:	    3336 kB
VmRSS:	    3300 kB
VmData:	    1692 kB
VmStk:	     136 kB
VmExe:	     776 kB
VmLib:	    1696 kB
VmPTE:	      12 kB
VmSwap:	       0 kB
Threads:	1
SigQ:	0/1403
SigPnd:	0000000000000000
ShdPnd:	0000000000000000
SigBlk:	0000000000010000
SigIgn:	0000000000384004
SigCgt:	000000004b813efb
CapInh:	0000000000000000
CapPrm:	0000000000000000
CapEff:	0000000000000000
CapBnd:	0000001fffffffff
Seccomp:	0
Cpus_allowed:	1
Cpus_allowed_list:	0
voluntary_ctxt_switches:	102
nonvoluntary_ctxt_switches:	93
