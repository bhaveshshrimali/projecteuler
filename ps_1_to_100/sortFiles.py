import os
fnames = []
for dirpath, dirname, filenames in os.walk("."):
    fnames.extend(filenames)
    print(dirpath, dirname, filenames)
# fnames.remove("sortFiles.py")
# files_to_copy = []
# cdir = os.getcwd()
# dir_to_copy_python = os.path.join(cdir, "python")
# dir_to_copy_cpp = os.path.join(cdir, "cpp")
# for f in fnames:
#     fil, ex = f.split(".")
#     if ex == "cpp" or ex == "out" or ex == "exe":
#         os.replace(f"{fil}.{ex}", os.path.join(dir_to_copy_cpp, f"{fil}.{ex}"))
#     elif ex == "py":
#         os.replace(f"{fil}.py", os.path.join(dir_to_copy_python, f"{fil}.py"))
