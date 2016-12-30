{
    'target_defaults': {
        'default_configuration': 'Release',
        'configurations': {
            'Debug': {
                'defines': [ 'DEBUG', '_DEBUG' ],
                'msvs_configuration_platform': 'x64',
                'msvs_settings': {
                    'VCCLCompilerTool': {
                        'RuntimeLibrary': 1, 
                    },
                    'VCLinkerTool': {
                        'LinkTimeCodeGeneration': 1,
                        'OptimizeReferences': 2,
                        'EnableCOMDATFolding': 2,
                        'LinkIncremental': 1,
                        'GenerateDebugInformation': 'true',
                        'AdditionalLibraryDirectories': [
                        ]
                    }          
                },
                'xcode_settings': {
                    'GCC_CW_ASM_SYNTAX': 'NO',
                    'GCC_ENABLE_PASCAL_STRINGS': 'NO',
                    'OTHER_LDFLAGS': [
                    ]
                },
            },
            'Release': {
                'defines': [ 'NDEBUG' ],
                'msvs_configuration_platform': 'x64',
                'msvs_settings': {
                    'VCCLCompilerTool': {
                        'RuntimeLibrary': 0,
                        'Optimization': 3,
                        'FavorSizeOrSpeed': 1,
                        'InlineFunctionExpansion': 2,
                        'WholeProgramOptimization': 'true',
                        'OmitFramePointers': 'true',
                        'EnableFunctionLevelLinking': 'true',
                        'EnableIntrinsicFunctions': 'true'            
                    },
                    'VCLinkerTool': {
                        'LinkTimeCodeGeneration': 1,
                        'OptimizeReferences': 2,
                        'EnableCOMDATFolding': 2,
                        'LinkIncremental': 1,
                        'AdditionalLibraryDirectories': [
                        ]            
                    }          
                },
                'xcode_settings': {
                    'GCC_CW_ASM_SYNTAX': 'NO',
                    'GCC_ENABLE_PASCAL_STRINGS': 'NO',
                    'OTHER_LDFLAGS': [
                    ]
                },
            }
        },
    },

    'targets': [
        {
            'target_name': 'test_platform',
                'type': 'executable',
                'include_dirs': [
                    'src',
                ],
                'sources': [
                    'test/test_platform.cpp',
                ],
        }
    ],
}
