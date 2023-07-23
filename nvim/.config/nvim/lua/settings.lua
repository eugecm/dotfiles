--[[
  File: settings.lua
  Description: Base settings for neovim
  Info: Use <zo> and <zc> to open and close foldings
]]

require "helpers/globals"

-- Set associating between turned on plugins and filetype
cmd[[filetype plugin on]]

-- Disable comments on pressing Enter
cmd[[autocmd FileType * setlocal formatoptions-=cro]]

-- Numbers
opt.nu = true
opt.relativenumber = true

-- Tabs {{{
opt.tabstop = 4                     -- 1 tab equal 4 spaces
opt.softtabstop = 4
opt.shiftwidth = 4                  -- Set amount of space characters, when we press "<" or ">"
opt.expandtab = true                -- Use spaces by default
opt.smartindent = true              -- Turn on smart indentation. See in the docs for more info
-- }}}

-- Text {{{
opt.foldmethod = 'syntax'
opt.wrap = false
-- }}}

-- Search {{{
opt.hlsearch = false
opt.incsearch = true
opt.ignorecase = true               -- Ignore case if all characters in lower case
opt.joinspaces = false              -- Join multiple spaces in search
opt.smartcase = true                -- When there is a one capital letter search for exact match
opt.showmatch = true                -- Highlight search instances
-- }}}

-- Window {{{
opt.splitbelow = true               -- Put new windows below current
opt.splitright = true               -- Put new vertical splits to right
opt.scrolloff = 8
opt.signcolumn = "yes"
-- }}}

-- Wild Menu {{{
opt.wildmenu = true
opt.wildmode = "longest:full,full"
-- }}}

-- Backups & files
opt.swapfile = false
opt.backup = false

-- Default Plugins {{{
local disabled_built_ins = {
    "netrw",
    "netrwPlugin",
    "netrwSettings",
    "netrwFileHandlers",
    "gzip",
    "zip",
    "zipPlugin",
    "tar",
    "tarPlugin",
    "getscript",
    "getscriptPlugin",
    "vimball",
    "vimballPlugin",
    "2html_plugin",
    "logipat",
    "rrhelper",
    "spellfile_plugin",
    "matchit"
}

for _, plugin in pairs(disabled_built_ins) do
    g["loaded_" .. plugin] = 1
end
-- }}}

-- vim: tabstop=2 shiftwidth=2 expandtab syntax=lua
