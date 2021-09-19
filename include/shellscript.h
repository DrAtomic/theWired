#ifndef SHELLSCRIPT
#define SHELLSCRIPT "\
#!/bin/bash \n\
tmux new-session -d -s $USER \n\
tmux split-window -h \n\
tmux send-keys 'git diff' Enter \n\
tmux split-window -v \n\
tmux select-pane -t 0 \n\
tmux attach-session \n\
"
#endif

