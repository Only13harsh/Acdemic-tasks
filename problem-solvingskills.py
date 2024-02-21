def is_smart(person):
    # A person is considered smart if they can solve a simple problem
    smart_threshold = 42

    # Check if the person's problem-solving skills exceed the threshold
    if person['problem_solving_skills'] > smart_threshold:
        return True
    else:
        return False

# Example usage:
person_data = {'name': 'John', 'problem_solving_skills': 50}

if is_smart(person_data):
    print(f"{person_data['name']} is smart!")
else:
    print(f"{person_data['name']} might need to work on their problem-solving skills.")
