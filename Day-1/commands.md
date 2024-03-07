# Linux Basic Command
    - $date --it prints current date and time
    - $cal  --it prints current month
      - ex. $cal -y --it prints current year
      -     $cal 02 2020 --prints given month
      -     $cal -j -- it counts day of current year
      -     $man cal -- check for more detail
    - $expr --int arithmetic
      - ex. $expr 48 + 5
            $expr 48 - 8
            $expr 48 / 2
            $expr 48 % 6
    - $factor 45 --printd factor of number
    - $file filepath --Checks a file’s type
    - $top  --prints all running processes 
    - $shutdown	--turns off or restarts the system
    - $ps  --creates a snapshot of all running processes
    - $man -- manual/help
      - ex. $man date --prints detail of date command
      -     $man man
                  1.User commands
                  2. System calls
                  3. Library functions
                  4. File formats
                  5. Linux documentation
                  6. Admin commands
                  7. Linux kernel functions
    -$man 3 printf
    -$clear -- it clear the screen [shortcut : ctrl+l]

# Linux FileSystem Commands
   - $pwd --print present working directory 
        - syntax: $pwd
    -$cd -- change directory 
        -syntax: $cd dirpath
        -ex. $cd .. --go backwad directry
             $cd .  --Consider current directry
             $cd dirpath --goes to given path

    -$ls -- list directory contents 
        -syntax: ls dirpath
        -ex. $ls -l --
             $ls -a --
             ...
             $ls / --shows root directory content
             $man ls --For more info
    -$mkdir -- make directory/Folder
        -syntax: mkdir dirpath
    -$rmdir -- remove empty directory 
        -syntax: $rmdir dirpath
# File commands
    -cat
        - $cat > filepath -- create new file
        - $cat filepath   -- display file contents
    -stat
        - $stat path  -- display status/info of file/dir
    -rm (remove)
        - $rm filepath -- delete given file
        - $rm -r dirpath -- delete dir with all contents
    -mv (move)
        - $mv filepath destdirpath -- move given file into given dest directory
        - $mv dirpath destdirpath -- move given dir into given dest directory
        - $mv oldname newname -- rename given file
    -cp (copy)
        - $cp filename newfilename  -- copy file with new name/path.
        - $cp filepath destdirpath  -- copy file into given dest dir with same name.
        - $cp -r dirpath destdirpath -- copy file into given dest dir with same name.
    - touch
        - touch demo.txt --create empty file

# VIM modes
    -Command mode
        - Default mode
        - Press "Esc" to go in command mode.
    - Edit mode (Insert)
        - Press "i" to go in Insert mode.
        - Edit the file.
  # VIM Commands
    - Basic 
        - :q  -- Quit
        - :w -- Write file
        - :wq -- Write and Quit
    - Copy commands
        - yy -- copy current line
        - 4yy -- copy 4 lines from current line
        - :3,5y -- copy line 3 to 5
        - y$ -- copy line after cursor
        - y^ -- copy line before cursor
        - yw -- copy current word
        - 2yw -- copy two words from cursor
    - cut commands
        - dd --cut current line
        - 3dd -- cut 3 lines from current line
        - :5,7d -- cut line 5 to 7
        - d$ -- cut line after cursor
        - d^ -- cut line before cursor
        - dw -- cut current word
        - 2dw -- cut two words from cursor
    - paste
        - p -- paste copied contents
    - undo
        - u -- undo
    - redo
        - press  ctrl+R  -- redo
    - Format document
        - gg=G -- format/indent document 
  
  # create file using VIM Editor
    - $vim demo01.c  --to create file
    - $ls
    - $gcc demo01.c -o demo01.out --to compile file
    - $./demo01.out -- to run the code
  
  # vim run commmand file (.vimrc)
    - To create give command
      - $vim ~/.vimrc
          - set number
          - set autoindent
          - set tabstop=4
          - set shiftwidth=4
          - syntax on
          - set nowrap
          - set autowriteall


    

     



