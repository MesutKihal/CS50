import csv
import sys

# Count STR consecutive occurrences


def STRs_Counter(dna, STR):
    i = 0
    count = 0
    maxi = 0
    size = len(STR)
    while i+size <= len(dna):
        if dna[i:i+size] == STR:
            count += 1
            if count >= maxi:
                maxi = count
            i += size
        else:
            count = 0
            i += 1
    return maxi


def main():
    database = sys.argv[1]
    sequence = sys.argv[2]
    # Read csv file
    with open(database, 'r') as csv_file:
        csv_data = list(csv.DictReader(csv_file))
    # Read DNA data from txt file
    with open(sequence, 'r') as dna_file:
        dna_data = dna_file.readlines()[0]
    # Store keys in an array
    keys = [key for key in csv_data[0].keys() if key != 'name']
    # Count the consecutive occurrences for each STR
    STRs = [STRs_Counter(dna_data, key) for key in keys]
    # If anyone matches STRs counts return his name and break
    for data in csv_data:
        name = data['name']
        values = list(map(int, list(data.values())[1:]))
        if values == STRs:
            return name
            break

    # If not return no match
    return 'No match'


if __name__ == '__main__':
    print(main())
