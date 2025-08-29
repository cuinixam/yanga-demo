# -*- coding: utf-8 -*-
"""Configuration"""

import datetime

day = datetime.date.today()
# meta data #################################################################

project = "My Project"
copyright = f"{day.year} our team"
version = f"{day.year}.{day.month}.{day.day}"
release = f"{day}"

exclude_patterns = [
    "build",
    ".venv",
    ".git",
]

D_TARGET_NAME = "Default Target"
my_name = "Default Target"

html_context = {
    "my_name": my_name,
}


include_patterns = ["index.md", "mata/myst_config.md"]

html_title = f"{project} {release}"
html_show_sourcelink = True

extensions = []

# Parse markdown files
extensions.append("myst_parser")
myst_enable_extensions = [
    "colon_fence",
    "deflist",
    "html_admonition",
    "html_image",
    "substitution",
]

# The suffix of source filenames.
source_suffix = [
    ".md",
    ".rst",
]
