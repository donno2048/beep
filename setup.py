from setuptools import setup, Extension
setup(
    name='python-beep',
    version='1.0.0',
    license='MIT',
    author='Elisha Hollander',
    author_email='just4now666666@gmail.com',
    description='A Python module to generate sounds',
    long_description=open('README.md').read(),
    long_description_content_type="text/markdown",
    url='https://github.com/donno2048/beep',
    project_urls={
        'Documentation': 'https://github.com/donno2048/beep#readme',
        'Bug Reports': 'https://github.com/donno2048/beep/issues',
        'Source Code': 'https://github.com/donno2048/beep'
    },
    ext_modules=[Extension('beep', ['beep.c'])],
    classifiers=[
        "Intended Audience :: Developers",
        "License :: OSI Approved :: MIT License",
        "Programming Language :: Python :: 3"
    ],
    zip_safe = False,
    platforms=["win32"]
)