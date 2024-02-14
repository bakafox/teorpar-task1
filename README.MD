Это — ветка для сборки через CMake. Вариант для сборки через Make находится в ветке "make".

## Запуск
- Float: <code>cmake -D USE_FLOAT=ON -B ./build && make -C ./build && ./build/task1 && rm -rf ./build</code>
- Double: <code>cmake -D USE_FLOAT=OFF -B ./build && make -C ./build && ./build/task1 && rm -rf ./build</code>

## Прибл. результат
- Float: <code>-0.04272845387458801270</code>
- Double: <code>0.00000004314321443255</code>