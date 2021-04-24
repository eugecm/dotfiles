set nocompatible

call plug#begin('~/.vim/plugged')
Plug 'fatih/vim-go', { 'do': ':GoUpdateBinaries' }
Plug 'tpope/vim-sensible'
Plug 'ervandew/supertab'
Plug 'scrooloose/nerdtree'
Plug 'vim-syntastic/syntastic'
Plug 'mdempsky/gocode', { 'rtp': 'vim', 'do': '~/.vim/plugged/gocode/vim/symlink.sh' }
Plug 'tpope/vim-fugitive'
Plug 'majutsushi/tagbar'
Plug 'vim-airline/vim-airline'
Plug 'vim-airline/vim-airline-themes'
Plug 'sickill/vim-monokai'
call plug#end()

let mapleader = ' '

" supertab
let g:SuperTabDefaultCompletionType = "context"

" syntastic
set statusline+=%#warningmsg#
set statusline+=%{SyntasticStatuslineFlag()}
set statusline+=%*
let g:syntastic_always_populate_loc_list = 1
let g:syntastic_auto_loc_list = 1
let g:syntastic_check_on_open = 1
let g:syntastic_check_on_wq = 0
let g:syntastic_go_checkers = ['golangci_lint']

colorscheme monokai

" backup files
set backup noswapfile
set backupdir=$HOME/.vim/tmp/backup/
set undodir=$HOME/.vim/tmp/undo/
set directory=$HOME/.vim/tmp/swap/
set viminfo+=n$HOME/.vim/tmp/viminfo

" general config
set encoding=utf-8
set ls=2
set novisualbell
set ttyfast
set showcmd
set hidden
set ruler
set lazyredraw
set autoread
set ttimeoutlen=0
set showmatch
set number
set relativenumber
set clipboard=unnamed

"" keybindings section

" make typos work
inoremap jk <esc>
command! WQ wq
command! Wq wq
command! W w
command! Q q

" safe files
nnoremap <leader><space> :w<CR>

" manage common config files
nnoremap <leader>fed :e ~/.vimrc<enter>
nnoremap <leader>feR :so ~/.vimrc<enter>
nnoremap <leader>fes :e ~/.ssh/config<enter>
nnoremap <leader>fez :e ~/.zshrc<enter>

" easier navigation
nnoremap <leader><tab> :tabnext<enter>
nnoremap <leader>` :tabprevious<enter>
nnoremap <leader>b :Buffer<enter>
nnoremap <leader>. :Files<enter>
nnoremap <leader>/ :Ag<enter>
map <C-n> :cnext<CR>
map <C-m> :cprevious<CR>

" nerdtree
nnoremap <leader>nt :NERDTreeToggle<enter>

" git
nnoremap <leader>gt :Gstatus<enter>
nnoremap <leader>gc :!git commit -m
nnoremap <leader>ga :!git add

" go
nnoremap <leader>mm :GoMetaLinter<enter>
nnoremap <leader>mt :GoTest<enter>
nnoremap <leader>mi :GoImport
nnoremap <leader>md :GoDrop
nnoremap <leader>ma :GoAlternate<enter>
nnoremap <leader>mf :GoFillStruct<enter>

" tagbar
nnoremap <leader>tt :TagbarToggle<enter>

" others
nnoremap <C-g> :echo expand('%:p')<enter>
