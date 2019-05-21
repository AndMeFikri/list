@echo OFF
set "link="
set "file=index.c list.c"
set "para=-o run.exe"
echo link = %link%
echo file = %file%
echo para = %para%
gcc %para% %file% %link%
