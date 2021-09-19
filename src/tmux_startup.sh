#!/bin/bash

tmux new-session -d -s $USER
tmux split-window -h
tmux send-keys 'git diff' Enter
tmux split-window -v
tmux select-pane -t 0
tmux attach-session
