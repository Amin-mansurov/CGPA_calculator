# 🎓 CGPA Calculator

👉 Простой консольный калькулятор GPA/CGPA на C++, позволяющий пользователям сохранять данные о курсах и рассчитывать средний балл на основе кредитов и оценок.

---

## 📁 Структура проекта

```
CGPA_calculator/
├── build/             # Скомпилированные файлы CMake
├── include/           # Заголовочные файлы (.h)
├── src/               # Основные исходники проекта (.cpp)
├── main/              # Точка входа (main.cpp)
├── CMakeLists.txt     # Конфигурация сборки CMake
├── README.md          # Документация проекта
```

---

## 🚀 Сборка проекта

### Шаг 1. Клонирование репозитория:

```bash
git clone https://github.com/Amin-mansurov/CGPA_calculator.git
cd CGPA_calculator
```

### Шаг 2. Создание каталога сборки:

```bash
mkdir build
cd build
```

### Шаг 3. Сборка проекта:

```bash
cmake ..
make
```

### Шаг 4. Запуск программы:

```bash
./cgpa_calculator
```

> Убедитесь, что установлены компилятор g++ (версии 17+) и CMake (3.10+).

---

## 🧰 Возможности

* 📅 Добавление нового курса (название, кредит, оценка)
* 📝 Сохранение курсов в файл
* 📊 Загрузка всех курсов и расчёт GPA
* 🔢 Автоматическое преобразование оценок в баллы

---

## 📄 Пример использования

```
Enter 1 to load and calculate gpa from file or Enter 2 to add new course
2
Please enter course name (example ABC): MATH101
Please enter credit of course (example 8): 3
Please enter grade of course (example A+): B+
Course detail saved

1
Course Name: MATH101
credit = 3
grade  = B+
grade point  = 9.9

GPA = 3.3
```

---

## 📂 Хранение данных

Данные сохраняются в текстовом файле `NameOfStudent`, находящемся в каталоге с исполняемым файлом.

> В будущем можно реализовать хранение по имени пользователя или в формате CSV.

---

## 📚 Зависимости

* C++17 или выше
* CMake 3.10 или выше

---


## 👨‍💼 Автор

Amin Mansurov
[GitHub](https://github.com/Amin-mansurov)

---

## 📜 Лицензия

Проект распространяется под лицензией MIT. Свободно используйте, модифицируйте и распространяйте.
