def read_answers_from_file(file_path):
    """
    This function reads answers from a file.

    Parameters:
        file_path (str): The path to the file containing the answers.

    Returns:
        list: A list of answers.
        None: If an error occurs while reading the file.
    """
    try:
        with open(file_path, 'r') as file:
            answers = [line.strip() for line in file]
        return answers
    except (IOError, FileNotFoundError) as e:
        print(f"Error reading file: {e}")
        return None

def grade_quiz(student_name, answers):
    """
    This function grades a student's quiz based on their answers.

    Parameters:
        student_name (str): The name of the student.
        answers (list): A list of the student's answers.

    Returns:
        bool: True if the student passed the quiz, False otherwise.
    """
    correct_answers_key = ['A', 'D', 'B', 'C', 'D', 'C', 'A', 'A', 'C', 'D', 'A', 'C', 'B', 'D', 'B']
    
    correct_count = sum(1 for student_ans, key_ans in zip(answers, correct_answers_key) if student_ans == key_ans)
    incorrect_count = len(answers) - correct_count
    passed = correct_count >= 11
    
    incorrect_answers = [student_ans for student_ans, key_ans in zip(answers, correct_answers_key) if student_ans != key_ans]

    print(f"\nGrading {student_name}'s Quiz:")
    print(f"Number of correct answers: {correct_count}")
    print(f"Number of incorrect answers: {incorrect_count}")
    print(f"Incorrect answers: {incorrect_answers}")

    return passed

def main():
    """
    This function is the main function of the program.
    It reads a student's answers from a file and grades their quiz.
    """
    while True:
        try:
            print("\nQuiz Grading App...\n")
            file_path = input("quiz answers file (or 'exit' to quit): ")
            if file_path.lower() == 'exit':
                break

            student_name = input("Enter name of student: ")

            answers = read_answers_from_file(file_path)
            if answers is not None:
                passed = grade_quiz(student_name, answers)
                if passed:
                    print(f"\n{student_name} has PASSED the quiz!")
                else:
                    print(f"\n{student_name} has FAILED the quiz.")
        except Exception as e:
            print(f"An error occurred: {e}")

if __name__ == "__main__":
    main()