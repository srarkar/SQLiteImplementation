<img src="https://github.com/user-attachments/assets/056e16ff-bcef-447a-b4de-223066c7a3d1" alt="sqlbanner" width="500"/>

## Overview
This is the implementation of a very simple database modeled after SQLite. 
It consists of a single table, where the attributes of a row are an `id`, `username` and `email`, where the only real constraint is that the ID must be non-negative.

## Usage
First, ``cd`` into the ``SQLite`` folder in the main repo.
When you list out the current directory's contents via `ls`, you should see the `src`, `include`, and `spec` folders. 
`spec` is for testing, using a Ruby file, but we'll get to that later.
`include` contains a header file, which contains constants and definitions for the file in `src`. Speaking of which...

To run the database, compile it by running ```gcc db -o src/db.c```. This will create an executable called `db` in the current directory. 
Then, run it with `./db test`, where "test" is an arbitrary name for the name of our database. As you interact with the database, inserted information will be stored in a document called test.

The database has even fewer commands than SQLite. The only actual commands are ``insert`` and select``. 

For example, ``insert 1 user1 person1@example.com`` adds a row with id = `1`, username = `user1`, and email = `person1@example.com`.
Try messing with the constraints, such as attempting to store too few or too many attributes or a negative id, to verify that they are properly implemented.

Then, the contents of the database can be displayed by querying a `select`. There are no parameters for select, as it simply outputs the entire content of the table. 

## Additional
This database also supports a few ``meta commands``, which are not formal queries but still yield speciifc outputs. An example of a meta command that SQLite uses is ``.tables`` or ``.schema``. 
The meta commands available are:
  - `.exit`: self-explanatory. Since we use an external file to store the table, running `.exit` does _not_ delete information that has been inserted previously.'
  - `.btree`: indexes and tables in SQLite use B-trees to store data for logarithmic time operations. Running `.btree` outputs a visual representation of the data currently stored. More information on B-trees can be found in ``notes.pdf``.
  - `.constants`: This prints out some relevant constant values, such as row size, the cell size of a leaf node, and more.

### Test Cases
In the `spec` folder, there is a `db_spec.rb ` file that contains 13 test cases that verify the database can run the basic commands and meta commands with expected outputs. 

## Notes
A `notes.pdf` page can be found in the main directory, including an SQLite overview, visual representations, and references.

