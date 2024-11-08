set number
set tabstop=2
set shiftwidth=2
set encoding=utf-8

" INSERT mode
let &t_SI = "\<Esc>[6 q" . "\<Esc>]12;white\x7"
" REPLACE mode
let &t_SR = "\<Esc>[3 q" . "\<Esc>]12;white\x7"
" NORMAL mode
let &t_EI = "\<Esc>[2 q" . "\<Esc>]12;white\x7"
