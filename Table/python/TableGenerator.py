import unreal
import os
import sys
import csv

#project name
project_name = "ProjectPT"

#csv path
csv_folder = unreal.SystemLibrary.get_project_directory()+"CSV"

struct_save_folder = unreal.SystemLibrary.get_project_directory() + "Source/" + project_name + "/Public/Table"
print(struct_save_folder)