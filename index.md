---
myst:
  substitutions:
    scope: "component"
    variant_name: "MY_VARIANT"
    component_name: "MY_COMPONENT"
    components:
        - name: "MY_SUBCOMPONENT"
          description: "A subcomponent of MY_COMPONENT"
        - name: "MY_SUBCOMPONENT_2"
          description: "Another subcomponent of MY_COMPONENT"
---

# Hi from the main index.md! My name is {{ env.config.html_context.reports_config.name }}

- env.config.version: {{ env.config.version }}
- env.config.myst_enable_extensions: {{ env.config.myst_enable_extensions }}

Some description about the project.

Myst data:

- scope: {{ scope }}
- variant_name: {{ variant_name }}
- component_name: {{ component_name }}

- components: {{ components }}

## Jinja2 for loop over components

{{ for component in components }}
- name: {{ component.name }}
  description: {{ component.description }}
{{ endfor }}
