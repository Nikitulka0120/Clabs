# Собрать многофайловый проект
# Подсказка: Опция -I в gcc помогает решить проблему с поиском заголовочных файлов. (#include "" No such file or directory)
# Для использования make его необходимо установить: sudo apt install make
all:
	gcc ./pipes/write_pipe.c -c
	gcc ./pipes/read_pipe.c -c
	gcc ./background/background.c -c -I ./pipes/
	gcc ./app/main.c -c -I ./background/
	gcc main.o background.o read_pipe.o write_pipe.o