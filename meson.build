project('sdlstuff', 'cpp', version: '0.1.0')

sdl2_dep = dependency('sdl2')
sdlstuff_dep = [declare_dependency(
	include_directories: include_directories('src'),
	link_with: static_library('sdlstuff', sources: [
		'src/sdlstuff/context.cpp',
		'src/sdlstuff/nice_error.cpp',
		'src/sdlstuff/texture.cpp',
		'src/sdlstuff/window.cpp',
	], dependencies: [
		sdl2_dep,
	])
), sdl2_dep]
