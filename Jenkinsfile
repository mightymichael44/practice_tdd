pipeline {
    agent any
    stages {
        stage('Deploy') {
            steps {
                timeout(time: 3, unit: 'MINUTES') {
                    retry(5) {
                        mkdir cmake
                        cd cmake
                        cmake ..
                        sh ./build/unit_test/test_game
                    }
                }
            }
        }
    }
}